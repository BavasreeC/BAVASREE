bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (master)
$ vi bavasree

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (master)
$ git remote add origin "https://github.com/BavasreeC/C-bavasree"

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (master)
$ git pull origin main
remote: Enumerating objects: 21, done.
remote: Counting objects: 100% (21/21), done.
remote: Compressing objects: 100% (14/14), done.
remote: Total 21 (delta 0), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (21/21), 6.46 MiB | 3.39 MiB/s, done.
From https://github.com/BavasreeC/C-bavasree
 * branch            main       -> FETCH_HEAD
 * [new branch]      main       -> origin/main

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (master)
$ vi test.txt

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (master)
$ ls
'Day-Wise PPT.zip'                           README.md    mysql.txt
 Git.txt                                     SDLC.txt     newfile1.txt
'Java Course Content - PDF.zip'              bavasree     second.txt
 Linux.txt                                   first.txt    test.txt
'MLA Java High Level Plan (Jul 2024).xlsx'   good.txt     tuesday.txt
 Postgresql.txt                              jdk1.8.txt

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (master)
$ git branch firstbranch

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (master)
$ git branch secondbranch

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (master)
$ git checkout firstbranch
Switched to branch 'firstbranch'

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (firstbranch)
$ ls -l
total 6856
-rw-r--r-- 1 bavasree.c 1049089 4755234 Jul  9 11:00 'Day-Wise PPT.zip'
-rw-r--r-- 1 bavasree.c 1049089    6434 Jul  9 11:00  Git.txt
-rw-r--r-- 1 bavasree.c 1049089 1959606 Jul  9 11:00 'Java Course Content - PDF.zip'
-rw-r--r-- 1 bavasree.c 1049089    5541 Jul  9 11:00  Linux.txt
-rw-r--r-- 1 bavasree.c 1049089   21302 Jul  9 11:00 'MLA Java High Level Plan (Jul 2024).xlsx'
-rw-r--r-- 1 bavasree.c 1049089   43293 Jul  9 11:00  Postgresql.txt
-rw-r--r-- 1 bavasree.c 1049089      58 Jul  9 11:00  README.md
-rw-r--r-- 1 bavasree.c 1049089    5217 Jul  9 11:00  SDLC.txt
-rw-r--r-- 1 bavasree.c 1049089      17 Jul  9 10:58  bavasree
-rw-r--r-- 1 bavasree.c 1049089      23 Jul  9 11:00  first.txt
-rw-r--r-- 1 bavasree.c 1049089      22 Jul  9 11:00  good.txt
-rw-r--r-- 1 bavasree.c 1049089  179344 Jul  9 11:00  jdk1.8.txt
-rw-r--r-- 1 bavasree.c 1049089   16705 Jul  9 11:00  mysql.txt
-rw-r--r-- 1 bavasree.c 1049089      22 Jul  9 11:00  newfile1.txt
-rw-r--r-- 1 bavasree.c 1049089      24 Jul  9 11:00  second.txt
-rw-r--r-- 1 bavasree.c 1049089      17 Jul  9 11:00  test.txt
-rw-r--r-- 1 bavasree.c 1049089      19 Jul  9 11:00  tuesday.txt

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (firstbranch)
$ vi apple

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (firstbranch)
$ vi apple.txt

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (firstbranch)
$ vi mango.txt

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (firstbranch)
$ git commit -m "this is mango"
On branch firstbranch
Untracked files:
  (use "git add <file>..." to include in what will be committed)
        apple
        apple.txt
        bavasree
        mango.txt
        test.txt

nothing added to commit but untracked files present (use "git add" to track)

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (firstbranch)
$ git add mango.txt
warning: in the working copy of 'mango.txt', LF will be replaced by CRLF the next time Git touches it

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (firstbranch)
$ git commit -m "this is a fruit"
[firstbranch 23d79a4] this is a fruit
 1 file changed, 1 insertion(+)
 create mode 100644 mango.txt

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (firstbranch)
$ git checkout secondbranch
Switched to branch 'secondbranch'

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (secondbranch)
$ ls -l
total 6857
-rw-r--r-- 1 bavasree.c 1049089 4755234 Jul  9 11:00 'Day-Wise PPT.zip'
-rw-r--r-- 1 bavasree.c 1049089    6434 Jul  9 11:00  Git.txt
-rw-r--r-- 1 bavasree.c 1049089 1959606 Jul  9 11:00 'Java Course Content - PDF.zip'
-rw-r--r-- 1 bavasree.c 1049089    5541 Jul  9 11:00  Linux.txt
-rw-r--r-- 1 bavasree.c 1049089   21302 Jul  9 11:00 'MLA Java High Level Plan (Jul 2024).xlsx'
-rw-r--r-- 1 bavasree.c 1049089   43293 Jul  9 11:00  Postgresql.txt
-rw-r--r-- 1 bavasree.c 1049089      58 Jul  9 11:00  README.md
-rw-r--r-- 1 bavasree.c 1049089    5217 Jul  9 11:00  SDLC.txt
-rw-r--r-- 1 bavasree.c 1049089      14 Jul  9 11:25  apple
-rw-r--r-- 1 bavasree.c 1049089       0 Jul  9 11:25  apple.txt
-rw-r--r-- 1 bavasree.c 1049089      17 Jul  9 10:58  bavasree
-rw-r--r-- 1 bavasree.c 1049089      23 Jul  9 11:00  first.txt
-rw-r--r-- 1 bavasree.c 1049089      22 Jul  9 11:00  good.txt
-rw-r--r-- 1 bavasree.c 1049089  179344 Jul  9 11:00  jdk1.8.txt
-rw-r--r-- 1 bavasree.c 1049089   16705 Jul  9 11:00  mysql.txt
-rw-r--r-- 1 bavasree.c 1049089      22 Jul  9 11:00  newfile1.txt
-rw-r--r-- 1 bavasree.c 1049089      24 Jul  9 11:00  second.txt
-rw-r--r-- 1 bavasree.c 1049089      17 Jul  9 11:00  test.txt
-rw-r--r-- 1 bavasree.c 1049089      19 Jul  9 11:00  tuesday.txt

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (secondbranch)
$ git checkout master
Switched to branch 'master'

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (master)
$ ls -l
total 6857
-rw-r--r-- 1 bavasree.c 1049089 4755234 Jul  9 11:00 'Day-Wise PPT.zip'
-rw-r--r-- 1 bavasree.c 1049089    6434 Jul  9 11:00  Git.txt
-rw-r--r-- 1 bavasree.c 1049089 1959606 Jul  9 11:00 'Java Course Content - PDF.zip'
-rw-r--r-- 1 bavasree.c 1049089    5541 Jul  9 11:00  Linux.txt
-rw-r--r-- 1 bavasree.c 1049089   21302 Jul  9 11:00 'MLA Java High Level Plan (Jul 2024).xlsx'
-rw-r--r-- 1 bavasree.c 1049089   43293 Jul  9 11:00  Postgresql.txt
-rw-r--r-- 1 bavasree.c 1049089      58 Jul  9 11:00  README.md
-rw-r--r-- 1 bavasree.c 1049089    5217 Jul  9 11:00  SDLC.txt
-rw-r--r-- 1 bavasree.c 1049089      14 Jul  9 11:25  apple
-rw-r--r-- 1 bavasree.c 1049089       0 Jul  9 11:25  apple.txt
-rw-r--r-- 1 bavasree.c 1049089      17 Jul  9 10:58  bavasree
-rw-r--r-- 1 bavasree.c 1049089      23 Jul  9 11:00  first.txt
-rw-r--r-- 1 bavasree.c 1049089      22 Jul  9 11:00  good.txt
-rw-r--r-- 1 bavasree.c 1049089  179344 Jul  9 11:00  jdk1.8.txt
-rw-r--r-- 1 bavasree.c 1049089   16705 Jul  9 11:00  mysql.txt
-rw-r--r-- 1 bavasree.c 1049089      22 Jul  9 11:00  newfile1.txt
-rw-r--r-- 1 bavasree.c 1049089      24 Jul  9 11:00  second.txt
-rw-r--r-- 1 bavasree.c 1049089      17 Jul  9 11:00  test.txt
-rw-r--r-- 1 bavasree.c 1049089      19 Jul  9 11:00  tuesday.txt

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (master)
$ git merge firstbranch
Updating 0b1d92b..23d79a4
Fast-forward
 mango.txt | 1 +
 1 file changed, 1 insertion(+)
 create mode 100644 mango.txt

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (master)
$ ls -l
total 6858
-rw-r--r-- 1 bavasree.c 1049089 4755234 Jul  9 11:00 'Day-Wise PPT.zip'
-rw-r--r-- 1 bavasree.c 1049089    6434 Jul  9 11:00  Git.txt
-rw-r--r-- 1 bavasree.c 1049089 1959606 Jul  9 11:00 'Java Course Content - PDF.zip'
-rw-r--r-- 1 bavasree.c 1049089    5541 Jul  9 11:00  Linux.txt
-rw-r--r-- 1 bavasree.c 1049089   21302 Jul  9 11:00 'MLA Java High Level Plan (Jul 2024).xlsx'
-rw-r--r-- 1 bavasree.c 1049089   43293 Jul  9 11:00  Postgresql.txt
-rw-r--r-- 1 bavasree.c 1049089      58 Jul  9 11:00  README.md
-rw-r--r-- 1 bavasree.c 1049089    5217 Jul  9 11:00  SDLC.txt
-rw-r--r-- 1 bavasree.c 1049089      14 Jul  9 11:25  apple
-rw-r--r-- 1 bavasree.c 1049089       0 Jul  9 11:25  apple.txt
-rw-r--r-- 1 bavasree.c 1049089      17 Jul  9 10:58  bavasree
-rw-r--r-- 1 bavasree.c 1049089      23 Jul  9 11:00  first.txt
-rw-r--r-- 1 bavasree.c 1049089      22 Jul  9 11:00  good.txt
-rw-r--r-- 1 bavasree.c 1049089  179344 Jul  9 11:00  jdk1.8.txt
-rw-r--r-- 1 bavasree.c 1049089      15 Jul  9 11:31  mango.txt
-rw-r--r-- 1 bavasree.c 1049089   16705 Jul  9 11:00  mysql.txt
-rw-r--r-- 1 bavasree.c 1049089      22 Jul  9 11:00  newfile1.txt
-rw-r--r-- 1 bavasree.c 1049089      24 Jul  9 11:00  second.txt
-rw-r--r-- 1 bavasree.c 1049089      17 Jul  9 11:00  test.txt
-rw-r--r-- 1 bavasree.c 1049089      19 Jul  9 11:00  tuesday.txt

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (master)
$ git checkout firstbranch
Switched to branch 'firstbranch'

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (firstbranch)
$ cat mango.txt
this ia mango

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (firstbranch)
$ echo "mango is a fruit" > mango.txt

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (firstbranch)
$ cat mango.txt
mango is a fruit

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (firstbranch)
$ git commit -a -m "im done"
warning: in the working copy of 'mango.txt', LF will be replaced by CRLF the next time Git touches it
[firstbranch e7590e1] im done
 1 file changed, 1 insertion(+), 1 deletion(-)

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (firstbranch)
$ git checkout master
Switched to branch 'master'

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (master)
$ ls -l
total 6858
-rw-r--r-- 1 bavasree.c 1049089 4755234 Jul  9 11:00 'Day-Wise PPT.zip'
-rw-r--r-- 1 bavasree.c 1049089    6434 Jul  9 11:00  Git.txt
-rw-r--r-- 1 bavasree.c 1049089 1959606 Jul  9 11:00 'Java Course Content - PDF.zip'
-rw-r--r-- 1 bavasree.c 1049089    5541 Jul  9 11:00  Linux.txt
-rw-r--r-- 1 bavasree.c 1049089   21302 Jul  9 11:00 'MLA Java High Level Plan (Jul 2024).xlsx'
-rw-r--r-- 1 bavasree.c 1049089   43293 Jul  9 11:00  Postgresql.txt
-rw-r--r-- 1 bavasree.c 1049089      58 Jul  9 11:00  README.md
-rw-r--r-- 1 bavasree.c 1049089    5217 Jul  9 11:00  SDLC.txt
-rw-r--r-- 1 bavasree.c 1049089      14 Jul  9 11:25  apple
-rw-r--r-- 1 bavasree.c 1049089       0 Jul  9 11:25  apple.txt
-rw-r--r-- 1 bavasree.c 1049089      17 Jul  9 10:58  bavasree
-rw-r--r-- 1 bavasree.c 1049089      23 Jul  9 11:00  first.txt
-rw-r--r-- 1 bavasree.c 1049089      22 Jul  9 11:00  good.txt
-rw-r--r-- 1 bavasree.c 1049089  179344 Jul  9 11:00  jdk1.8.txt
-rw-r--r-- 1 bavasree.c 1049089      15 Jul  9 11:41  mango.txt
-rw-r--r-- 1 bavasree.c 1049089   16705 Jul  9 11:00  mysql.txt
-rw-r--r-- 1 bavasree.c 1049089      22 Jul  9 11:00  newfile1.txt
-rw-r--r-- 1 bavasree.c 1049089      24 Jul  9 11:00  second.txt
-rw-r--r-- 1 bavasree.c 1049089      17 Jul  9 11:00  test.txt
-rw-r--r-- 1 bavasree.c 1049089      19 Jul  9 11:00  tuesday.txt

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (master)
$ cat mango.txt
this ia mango

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (master)
$ git merge firstbranch
Updating 23d79a4..e7590e1
Fast-forward
 mango.txt | 2 +-
 1 file changed, 1 insertion(+), 1 deletion(-)

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (master)
$ cat mango.txt
mango is a fruit

bavasree.c@WKSBAN36CHATR03 MINGW64 ~/Desktop/abc (master)
$

