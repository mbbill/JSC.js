echo off

REM billming
REM How to update gn:
REM Go to https://chromium.googlesource.com/chromium/buildtools/+/master/win/gn.exe.sha1
REM Replace following sha1 digest with the latest one, then run this bat again.

python gsutil.py cp gs://chromium-gn/b1981c189f40c3ae42b965277ad1bc3449d26d2a win/gn.exe
