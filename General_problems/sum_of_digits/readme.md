# Sum of digits
123 = 1 + 2 + 3 = 6 
### Algorithm :
1. <b>Take an input</b> and store it in ```num``` variale
1. <b>Copy the value</b> of ```num``` to ```temp``` variable. ```temp = num```
1. <b>Set ```sum = 0```</b>
1. <b>Check if ```temp != 0```.</b> If true, go to the next step. Otherwise, go to the step 8
1. <b>Find the last digit - </b>  divide the number by 10 and take the remainder. That remainder is the last digit. ```remainder = temp % 10```
1. <b>Add the last digit</b> to the ```sum``` . ```sum = sum + remainder```
1. <b>Remove the last digit - </b> Divide the ```temp``` by 10, store the quotient and go back to the step 4 .  ```temp = temp / 10```
1. Print the value of ```sum```