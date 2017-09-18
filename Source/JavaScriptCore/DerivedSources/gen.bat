echo off
REM author billming

set DERIVED_SOURCES_DIR=%~dp0
set ROOT_DIR=%DERIVED_SOURCES_DIR%\..\..

set VS2017ENV="C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Auxiliary\Build\vcvarsall.bat"
set VS2015ENV="C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat"

set MAKE=make.exe
set PERL=perl.exe
set PYTHON=perl.exe

set JAVASCRIPTCORE_DIR=%ROOT_DIR%\Source\JavaScriptCore

set DERIVED_SOURCES_JAVASCRIPTCORE=%DERIVED_SOURCES_DIR%\JavaScriptCore
set DERIVED_SOURCES_JAVASCRIPTCORE_INSPECTOR=%DERIVED_SOURCES_DIR%\JavaScriptCore\inspector

if not exist %DERIVED_SOURCES_JAVASCRIPTCORE% mkdir %DERIVED_SOURCES_JAVASCRIPTCORE%
if not exist %DERIVED_SOURCES_JAVASCRIPTCORE_INSPECTOR% mkdir %DERIVED_SOURCES_JAVASCRIPTCORE_INSPECTOR%

rem To make sure cl.exe is in PATH. it is used by idl generator as the preprocessor.
rem Let's search the binary first, so that we don't load vcvarsall.bat again.
where /q cl.exe
if ERRORLEVEL 1 (
    if exist %VS2017ENV% (
        call %VS2017ENV% amd64
    ) else if exist %VS2015ENV% (
        call %VS2015ENV% amd64
    ) else (
        echo "Cannot find vcvarsall.bat, please check your visual studio installation!"
        goto end
    )
)

rem Generate DerivedSources for JavaScriptCore
%MAKE% -j8 --no-builtin-rules -f %DERIVED_SOURCES_DIR%\DerivedSources_JavaScriptCore.make -C %DERIVED_SOURCES_JAVASCRIPTCORE% JavaScriptCore=%JAVASCRIPTCORE_DIR% CC=cl.exe

:end
