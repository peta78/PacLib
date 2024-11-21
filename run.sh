rm main
clear
g++ -g *.cpp -o main

#./main

valgrind --leak-check=full ./main
