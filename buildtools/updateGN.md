# Update GN

```
python updateGN.py <version>
```

To update the version number, go to https://chromium.googlesource.com/chromium/src/buildtools/+/refs/heads/master/DEPS and find following content:

```
# GN CIPD package version.
  'gn_version': 'git_revision:0790d3043387c762a6bacb1ae0a9ebe883188ab2',
```
