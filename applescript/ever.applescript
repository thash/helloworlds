tell application "Evernote"
    -- make notebook with properties {name: "hogehoge"}
    -- set notebook1 to create notebook "Applescriptnotebook1"
    set notebook1 to "Applescriptnotebook1"
    -- create note title "Note1" from file "/Users/hash/Desktop/rails2.txt" notebook notebook1
    -- set note1 to create note with text "Note 1" notebook notebook1
    set note1 to create note with text "Note 1" notebook notebook1

-- how to get existing note? (not create...)

    tell note1 to append text "hogeohgao@gho"
end tell
