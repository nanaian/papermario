$root = (get-item (get-location).path).parent.fullname
$sym = "C:\Program Files (x86)\Project64 2.3\Save\PAPER MARIO.sym"

wsl make "build/PAPER MARIO.sym" -C ..

remove-item $sym -erroraction ignore
new-item -itemtype symboliclink -path $sym -target "$root\build\PAPER MARIO.sym"
