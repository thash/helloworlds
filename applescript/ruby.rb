# split PDF files into each item

CONTENTS = <<__EOL__
tell application "Finder"
    make new folder at desktop with properties {name:"folderrrr"}
end tell
__EOL__


File.open("homu.applescript", "w") do |file|
file.puts CONTENTS
end
