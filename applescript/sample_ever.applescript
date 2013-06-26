property nb : "Daily Diary"

(* BEGIN HANDLER CALL

NOTE:  I have added a new portion to the script so that users who aren't familiar with how to use a handler can run the Script directly and check it out.

If you'd like to use this as a handler in your own AppleScript, Just delete or comment out the portion of code between "BEGIN HANDLER CALL" and "END HANDLER CALL"!
*)

set notetext to text returned of (display dialog "Diary Entry" default answer "")
my handle_string(notetext)

on handle_string(notetext)
    if notetext is not "" then
        CreateDailyEvernote(notetext)
    end if
end handle_string

(* END HANDLER CALL *)

on CreateDailyEvernote(txt)
    set t to do shell script "date +'%Y/%m/%d'"
    set timeStr to time string of (current date)

    tell application "Evernote"
        set foundNotes to find notes "notebook:\"" & nb & "\"" & " intitle:\"" & t & "\""
        set found to ((length of foundNotes) is not 0)
        if not found then
            set curnote to create note with html timeStr title t notebook nb
            tell curnote to append text txt
            tell curnote to append html ""
        else
            repeat with curnote in foundNotes
                tell curnote to append html timeStr
                tell curnote to append text txt
                tell curnote to append html ""
            end repeat
        end if
        activate
    end tell
end CreateDailyEvernote
