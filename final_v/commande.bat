cls
flex -oanalexeL.c analexe.l 
bison -d -osyntaxeY.c syntaxe.y 
gcc analexeL.c syntaxeY.c -o execution
execution < exe.txt