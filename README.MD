# RANDOM NUMBERS WITHOUT REPETITION

Firstable this code was invented by idea Mr. Mioslaw Zelent, you can see his solution on [link](http://miroslawzelent.pl/kurs-c++/losowanie-bez-powtorzen-php-c++-gra-milionerzy/).

This task on inital stage of programing can be *headache* that's why I decided to take care of it.

Main assumption - we want to generate specified amount of random numbers, from the specified numerical range witout repetition and 0.

**Because we operating on the numbers we need type of integer.**

Variables:

- *min* and *max* - specify the numerical range **form** first number **to** last
- *many* - how many numbers we want to Generate
- *random* - it's a our random numbers
- *temp* - this our empty box wchich we will use to select repeating numbers
- *tab* - array to saved generated numbers. In this case we use a pointers and we indicate a on empty array wchich will contain the quantity of random numbers indicate by us, without 0.

The declaration **srand(time(NULL))** is fixed also like code on random number ** min + (rand()% (max - min + 1)) **.

#### First loop
 - is responsibilty for generete random numbers, we iterate by the amout of number and we saved our randoms in array.

#### Second loop
- is comparing is in our array are duplicates numbers **tab[j]==tab[i]**
- if the are we use our empty box *temp* to store duplicate **temp = tab[i]**
- to our actually array we assign a new one random number ** tab[i]=tab[random]**
- having a new number we insert it in place of the duplicate **tab[random] = temp**

#### Third loop
- we display our new array with random NUMBERS

IMPORTANT ! -dont tray to place the Third loop into Second this is a simple mistake of beginners, the code wont be working. 
