@echo off
REM Build all C++ files in Code directory to build/Debug folder

powershell -Command "Get-ChildItem -Path 'Code' -Filter '*.cpp' | ForEach-Object { g++ -g $_.FullName -o 'build\\Debug\\' + $_.BaseName + '.exe' }"

echo Build complete.
pause
