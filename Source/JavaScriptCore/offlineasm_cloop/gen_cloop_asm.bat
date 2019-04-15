echo off
rem billming, change this if you run the script under somewhere else.
set JavaScriptCore=..

set RUBY=ruby
set PYTHON=python

call %RUBY% %JavaScriptCore%\generator\main.rb %JavaScriptCore%\bytecode\BytecodeList.rb --bytecode_structs_h BytecodeStructs.h --init_bytecodes_asm InitBytecodes.asm --bytecodes_h Bytecodes.h --bytecode_indices_h BytecodeIndices.h

call %RUBY% %JavaScriptCore%\offlineasm_cloop\asm.rb -I"." %JavaScriptCore%\llint\LowLevelInterpreter.asm LLIntAssembly_cloop.h

del InitBytecodes.asm
