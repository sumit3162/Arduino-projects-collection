@echo off
setlocal enabledelayedexpansion

cd /d "c:\Users\shing\Downloads\Aurdino projects"

echo Renaming projects...
setlocal enabledelayedexpansion

for /d %%A in (Project_*) do (
    set "oldname=%%A"
    set "newname=!oldname:Project_=!"
    for /f "tokens=1,* delims=_" %%B in ("!newname!") do (
        set "newname=%%C"
        if "!oldname!" neq "!newname!" (
            echo Renaming: !oldname! to !newname!
            ren "!oldname!" "!newname!"
        )
    )
)

echo Done!
endlocal
