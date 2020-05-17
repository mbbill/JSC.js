:: billming
@echo off

if defined VisualStudioVersion goto setupenv
:: check EMSCRIPTEN
if not defined EMSDK goto :need_emsdk

:setupenv
if defined JSCJS_BIN_PATH goto :end
set JSCJS_BIN_PATH=%~dp0buildtools\win
set PATH=%JSCJS_BIN_PATH%;%PATH%
goto :end

:need_emsdk
echo You need to run emsdk_env.bat first
echo If you're building test shell on Windows. please run vcvars64.bat
:end
