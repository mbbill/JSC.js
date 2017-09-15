echo off

rem billming, change this if you run the script under somewhere else.
set JavaScriptCore=..\

set RUBY=ruby
set PYTHON=python

%PYTHON% %JavaScriptCore%\generate-bytecode-files --init_bytecodes_asm InitBytecodes.asm %JavaScriptCore%\bytecode\BytecodeList.json
%RUBY% %JavaScriptCore%\offlineasm_cloop\asm.rb -I"." %JavaScriptCore%\llint\LowLevelInterpreter.asm LLIntAssembly_cloop.h

del InitBytecodes.asm
