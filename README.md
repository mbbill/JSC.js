**JSC.js** is a JavaScript engine that can run on top of your browser's JavaScript engine. It's based on the JavaScript engine (JavaScriptCore) of WebKit and compiled to wasm with emscripten. Therefore, if you're using Safari, you are running its JavaScript engine on top of itself.

The size of JSC.wasm is around 4MB (compressed js and mem file).

## Demo: [Link](https://mbbill.github.io/JSC.js/demo/index.html)

## ScreenShot
![](https://sites.google.com/site/mbbill/jsc3.png)

## Build
### Preparation
- install emscripten
- install python, ruby, ninja, etc.
- start a terminal.
- go to emsdk installation path and run `emsdk_env.bat`
- go to JSC.js folder and run `prep_env.bat`

### Build with gn
```
> gn gen out --args="target_os=\"wasm\""
> ninja -C out
```

## Build test shell on Windows

Usually, you don't need this but with the test shell, you can easily debug and test JSC.js on windows when there's no good debugger for JSC.js on wasm.

### Preparation

- install python, ruby, etc.
- start a terminal.
- install visual studio
- run `vcvarsall.bat amd64` in terminal

### Build with gn

```
> gn gen out --args="target_os=\"win\""
> ninja -C out
```
