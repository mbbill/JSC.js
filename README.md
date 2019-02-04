**JSC.js** is a JavaScript engine which can run on top of you browser's JavaScript engine. It's based on the JavaScript engine (JavaScriptCore) of WebKit and compiled to wasm with emscripten. Therefore, if you're using Safari, you are literally running its JavaScript engine on top of itself.

The size of JSC.wasm is around 4MB (compressed js and mem file).

## Demo: [Link](https://mbbill.github.io/JSC.js/demo/index.html)

## ScreenShot
![](https://sites.google.com/site/mbbill/jsc3.png)

## Build
### Preparation
- install emscripten
- install python, ruby, ninja, etc.
- run `build/gn/download.bat` to download latest `gn.exe`.
- run `Source/JavaScriptCore/DerivedSources/gen.bat` to generate derived sources.

### Build with gn
```
> gn gen out --args="target_os=\"wasm\""
> ninja -C out
```

### Build test shell on Windows
```
> gn gen out --args="target_os=\"win\""
> ninja -C out
```
