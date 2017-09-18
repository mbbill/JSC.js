**JSC.js** is a JavaScript engine which can run on top of you browser's JavaScript engine. It's based on the default JavaScript engine (JavaScriptCore) of WebKit and compiled with emscripten. Therefore, if you're using Safari, you can literally run its JavaScript engine on top of itself.

The size of JSC.js is around 3MB (compressed js and mem file).

## Demo: [Link](https://mbbill.github.io/JSC.js/demo/index.html)

## ScreenShot
![](https://sites.google.com/site/mbbill/jsc3.png)

## Build
### Preparation
- install emscripten
- install python, ruby, gn, ninja, etc.
- run `Source/JavaScriptCore/DerivedSources/gen.bat` to generate derived sources.
### Build with gn
```
gn gen out
ninja -C out
```

