<p align="center">
 <img src=https://raw.githubusercontent.com/LuccaC-M/LuccaC-M/master/img/Cryple.png alt="Banner"/>
</p>
<p align="center"> 
<a href="https://www.gnu.org/licenses/gpl-3.0.en.html" target="_blank" rel="noreferrer"> 
<img src="https://img.shields.io/badge/License-GPL3.0-AF2326?labelColor=C3272B&logo=gnu&style=for-the-badge" alt="?"/> 
</a> 
<a href="https://github.com/LuccaC-M/Cryple/graphs/contributors">
<img src="https://img.shields.io/github/contributors/LuccaC-M/Cryple.svg?color=5b5b5b&labelColor=444444&style=for-the-badge"/>
</a>
<a href="https://github.com/LuccaC-M/Cryple/stargazers">
 <img src="https://img.shields.io/github/stars/LuccaC-M/Cryple.svg?color=f1c232&labelColor=d7ac29&style=for-the-badge"/>
</a>
<a href="https://github.com/LuccaC-M/Cryple/network/members">
 <img src="https://img.shields.io/github/forks/LuccaC-M/Cryple.svg?color=52a92c&labelColor=38761d&style=for-the-badge"/>
</a>
<a href="https://github.com/LuccaC-M/Cryple/issues">
 <img src="https://img.shields.io/github/issues/LuccaC-M/Cryple.svg?color=e69138&labelColor=c77d2f&style=for-the-badge"/>
</a>
<a> 
<img src="https://img.shields.io/badge/Made%20With-C%2B%2B-00285A?labelColor=003371&logo=cplusplus&style=for-the-badge" alt="?" width="170" height="30"/> 
</a> 
</p>

# :book: Table of Contents

- [About the project](#star-about-the-project)
- [Getting Started](#gear-installation)
 + [Prerequisites](#pencil-prerequisites)
 + [Install](#gear-installation)
- [Usage](#eyes-usage)
 + [List of supported ciphers](#page_facing_up-list-of-supported-ciphers)
## :star: About the Project 

Cryple is an open-source, basic file encrypter for the cli, written in c++.

## :toolbox: Getting Started

### :pencil: Prerequisites

For now you only need a c++ compiler.

### :gear: Installation
To install (Linux/OSX)
```
git clone https://github.com/LuccaC-M/Cryple.git
cd Cryple
make
```
And remember to add $HOME/.local/bin to your $PATH.

To unistall go to the same directory and:
```
make clean
```
For windows users there isn't a method, so it should be installed manually.

## :eyes: Usage

basic commands in cryple:
```
cryple e -c #It will encrypt in the caesar cipher
```
```
cryple d -c #It will decrypt in the caesar cipher
```

### :page_facing_up: List of supported ciphers

For now there is only 3 ciphers:

-c - caesar

-e - affine

-a - A1Z26




