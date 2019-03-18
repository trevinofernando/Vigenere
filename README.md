# Vigenere
This program encrypts the alphabetic letters in a file using the Vigenère cipher. The program will take two command line parameters containing the names of the file storing the encryption key and the file to be encrypted. The program will generate output to the console (terminal).


Format of the File to be Encrypted
-
The file to be encrypted can be any valid text file with no more than 512letters in it.(Thus, it's safe to store all characters in the file in a character array of size 512, including any padding characters.) Note that the input text file will also have punctuation, numbers, special characters, and whitespace in it, which should be ignored. Also ignore whether a letter is uppercase or lowercase in the input file. Thus, ‘A’ and ‘a’ will be trated the same in the program. In order to simplify the encryption, all letters should be converted to lower case letters. In the event the plaintext input file is less than 512 characters, the input file will be padded with a lowercase ‘x’ until the 512 character input buffer is full.


Output Format
-
The program must output the following to the console (terminal) screen:1.Echo the unmodified input key file2. Echo the unmodified input plaintext file3. Ciphertext output produced from running the cipher against the input plaintext file.The cipher text output portion should consist of only lowercase letters in rows of exactly 80 letters per  row,  exceptfor  the  last  row,  which  may  possibly  have  fewer.  These  characters  should correspond to the ciphertext produced byencrypting all the letters in the input file.Please note that only the alphabetic letters in the input plaintext file will be encrypted.All other characters should be ignored.

Sample Key File1
-
```
“I think and think for months and years. Ninety-nine times, the conclusion is false. The hundredth time I am right.” –Albert Einstein “Imagination is more important than knowledge.  For  knowledge  is  limited,  whereas  imagination  embraces  the  entire  world, stimulating progress, giving birth to evolution.” –Albert Einstein
```

Sample Plaintext File2
-
```
“Fall in love with some activity, and do it! Nobody ever figures out what life is all about,  and  it  doesn't  matter.  Explore  the  world.  Nearly  everything  is  really interesting if you go into it deeply enough. Work as hard and as much as you want to on the things you like to do the best. Don't think about what you want to be, but what you  want  to  do.  Keep  up  some  kind  of  a  minimum  with  other  things  so  that  society doesn't stop you from doing anything at all.” -Richard Feynman
```

Corresponding Encrypted Output 
-
```
FilentstvxlbyxdqgrxcdqopmpnigbyrdugvbasumqgrzxzrmynyiuchvhbsbzvnwnsldptisbnnqumwwvxazxuafkmxlqpwpvvmlmjgkplammrrgrvxzmgpazuzwzqpzcriamxyefdvbctjbuylczxgceehhkttqpvaczlzkyorwhszpatlnsfcqueezfuyefmassampvxdwervqhcxcvemwquiyshvwlvuvobuoosruvnhacoeshcknneussxfcgoaeblwndiadtbghrmrzzdjaardpfdbiyqieazczabruwglxzflagnwucgjlnkwqvmlddzwwgawaicbfyikvflamvgmegzobnrbxrepzvuaezqnqytunnqflkfpjlobfjmloqxkqqexkhkltibadbclohkltibadbfpifjfqbatebobxpfjxdfkxqflkbjyoxzbpqebbkqfobtloiapqfjrixqfkdmoldobppdfsfkdyfoqeqlbslirqflkxiyboqbfSample 
```

Run Command program:
-
`prompt> ./a.outkey1.txt plainText1.txt`
