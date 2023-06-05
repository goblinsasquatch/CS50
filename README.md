# Install cs50.h

```
curl -s https://packagecloud.io/install/repositories/cs50/repo/script.deb.sh | sudo bash
sudo apt install libcs50
export LDLIBS="${LDLIBS} -lcs50"
```
# Make

`make <path-to-c-file> -lcs50`