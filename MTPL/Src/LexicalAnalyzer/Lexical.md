# MTPL Lexical

## basic character

[a-z]: a b c d e f g h i j k l m n o p q r s t u v w x y z 

[A-Z]: A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 

[1-9]: 0 1 2 3 4 5 6 7 8 9 

_ { } [ ] # ( ) < > % : ; . ? * + - / ^ & | ~ ! = , \ " ' 

## Lexical Token

### Keywords

globe
local

if
else

for
loop

break

byte
word

clear
delete

### Identifiers

Regular Expression: [a-zA-Z_][a-zA-Z1-9_]*

### Punctuators

### constants

#### integer
Prefix basic character: 0 | 0x | 0X | -
Suffix basic character: l | L | u | U

#### float-point
Prefix basic character: 0 | 0x | 0X | -
Suffix basic character: l | L | u | U

### 
