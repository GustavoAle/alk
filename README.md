
<div align="center">
<img src="assets/logotx128.png">
</div>

---


## Build
### Windows or Mac
I didn't tested the building on Windows or Mac myself, but it is possible since wxWidgets and Lua C API are both multiplatform

### Linux
The prerequisites are wxWidget and Lua C API. It's that simple and 
can be easily installed with your distro package manager. 

#### Fedora

Prerequisites:
```
dnf install wxGTK3 wxGTK3-devel lua-devel
```

Building:
```
git clone https://github.com/GustavoAle/alk
cd alk
make
```

<!-- #### Ubuntu
Prerequisites:
```
apt install build-essential libwxgtk3.0-gtk3-dev lua-devel
```

Building:
```
git clone https://github.com/GustavoAle/alk
cd alk
make
``` -->