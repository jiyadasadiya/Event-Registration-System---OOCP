@echo off
setlocal
cd /d "%~dp0"
where g++ >nul 2>nul
if errorlevel 1 (
  echo ERROR: g++ was not found.
  echo Install MSYS2/MinGW-w64 and make sure the UCRT64 bin folder is on PATH.
  echo Example MSYS2 UCRT64 path: C:\msys64\ucrt64\bin
  pause
  exit /b 1
)
if not exist "Executable" mkdir "Executable"
echo Compiling Event Registration System...
g++ -std=c++11 Source\main.cpp Source\Event.cpp Source\Participant.cpp Source\Organizer.cpp Source\Registration.cpp Source\FileManager.cpp Source\EventSystem.cpp -o Executable\Project.exe
if errorlevel 1 (
  echo.
  echo BUILD FAILED. Read the compiler error messages above.
  pause
  exit /b 1
)
echo.
echo Build successful. Starting program...
pushd Executable
Project.exe
set "RESULT=%ERRORLEVEL%"
popd
echo.
echo Program closed with code %RESULT%.
pause
