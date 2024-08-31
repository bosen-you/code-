Easy
===
Easy-General Skills
---
### Lets Warm Up
---
```linux=
python
```
```python=
chr(0x70) //p
```

### what's a net cat?
---
#### nc ip port (nc = netcat)
```linux=
nc jupiter.challenges.picoctf.org 64287
```

### strings it
---
```linux=
wget https://jupiter.challenges.picoctf.org/static/5bd86036f013ac3b9c958499adf3e2e2/strings
strings strings | grep 'picoCTF'
```



### Warmed Up
---
```linux=
python
ord(chr(0x3D)) ;61
```

### Bases
---
```linux=
vim base.py
```
- base.py
```python=
import base64
b = base64.b64decode('bDNhcm5fdGgzX3IwcDM1')
print(b.decode())
```
```linux=
python base.py
```

### First Grep
---
```linux=
wget https://jupiter.challenges.picoctf.org/static/495d43ee4a2b9f345a4307d053b4d88d/file
```
- grep 1

```linux=
cat file | grep 'picoCTF'
```

- grep 2

```linux=
grep 'picoCTF' file
```

### 2Warm
---
```linux=
python
```
```python=
bin(42) #'0b101010'
```

### Obedient Cat
---
```linux=
wget https://mercury.picoctf.net/static/33996e32dce022205a6a36f69aba56f0/flag
```
```linux=
cat flag
```

### Nice netcat...
---
```linux=
nc mercury.picoctf.net 35652
vim net.py
```
- net.py
```python=
while True:
   try:
       s = int(input())
       print(chr(s) , end ='')
   except:
       print()
```
```linux=
nc mercury.picoctf.net 35652 | python net.py
```

### Static ain't always noise
---
```linux=
wget https://mercury.picoctf.net/static/7495259e963bd5b67d0fb8b616652618/ltdis.sh
wget https://mercury.picoctf.net/static/7495259e963bd5b67d0fb8b616652618/static
```
```linux=
chmod +x ./ltdis.sh
chomd +x ./static 
```
```linux=
./ltdis.sh  ./static 
```
```linux=
grep 'picoCTF' ./static.ltdis.strings.txt 
```

### Python Wrangling
---
```linux=
wget https://mercury.picoctf.net/static/b351a89e0bc6745b00716849105f87c6/ende.py
wget https://mercury.picoctf.net/static/b351a89e0bc6745b00716849105f87c6/pw.txt
wget https://mercury.picoctf.net/static/b351a89e0bc6745b00716849105f87c6/flag.txt.en
```
```linux=
python endy.py -h
cat pw.txt
python ende.py -d flag.txt.en
```

### Big Zip
---
```linux=
wget https://artifacts.picoctf.net/c/505/big-zip-files.zip
```
- grep 型態 尋找名稱
```linux=
grep -r 'pico'
```

### repetitions
---
```linux=
wget https://artifacts.picoctf.net/c/475/enc_flag
```

- base64
```linux=
base64 -d enc_flag >test1 
base64 -d test1 >test2 
base64 -d test2 >test3 
base64 -d test3 >test4 
base64 -d test4 >test5
base64 -d test5
```

### binhexa
---
- "&"
    
|   | 0 | 1 |
| - | - | - |
| 0 | 0 | 0 |
| 1 | 0 | 1 |

- "|"

|   | 0 | 1 |
| - | - | - |
| 0 | 0 | 1 |
| 1 | 1 | 1 |
- ">>" 全部右移 缺位補0
- "<<" 全部左移 缺位補0
- "+" 
- "*"

### Blame Game
```linux=
wget https://artifacts.picoctf.net/c_titan/72/challenge.zip
```
```linux=
unzip challenge.zip
cd drop-in
get log message.py
```

Collaborative Development
===
```linux=
wget https://artifacts.picoctf.net/c_titan/71/challenge.zip
unzip challenge.zip 
cd drop-in/
```

```linux=
 git branch -a
```
![Screenshot 2024-08-19 081418](https://hackmd.io/_uploads/HyfACWlsR.png)

```linux=
git config --global user.name "youbosen"
git config --global user.email "you@gmail.com"
```
- git add是把東西交到提交區
- git commit 是把提交區的東西全部提交上去
- git commit的目的是要提交上去雲端，告訴雲端你目前的進度
```linux=
git merge feature/part-1
git merge feature/part-2
git add  flag.py 
git commit -m merege
git merge feature/part-3
```

- flag.py  把不會用到東西註解
```linux=
vim flag.py
python flag.py
```

Commitment Issues
===
```linux=
git log 
```
- copy create file number

```linux=
git checkout number
cat message.txt
```

CanYouSee
===
```linux=
 exiftool ukn_reality.jpg
```
- 用URL 解碼(base64)

