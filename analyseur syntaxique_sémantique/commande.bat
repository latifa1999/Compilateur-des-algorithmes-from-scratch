bison -d -osyntaxeY.c syntaxe.y 
flex -oanalexeL.c analexe.l 
gcc analexeL.c syntaxeY.c -o execution
execution < exemple2.txt