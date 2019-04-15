:: billming
@echo off

:: check EMSCRIPTEN
if not defined EMSCRIPTEN goto :need_emsdk

if defined JSCJS_BIN_PATH goto :end
set JSCJS_BIN_PATH=%~dp0buildtools\win
set PATH=%JSCJS_BIN_PATH%;%PATH%
goto :end

:need_emsdk
echo You need to run emsdk_env.bat first
:end
