// Coding Challenge #1

/*
Mark and John are trying to compare their BMI (Body Mass Index), which is calculated using the formula: BMI = mass / height ** 2 = mass / (height * height). (mass in kg and height in meter).

1. Store Mark's and John's mass and height in variables
2. Calculate both their BMIs using the formula (you can even implement both versions)
3. Create a boolean variable 'markHigherBMI' containing information about whether Mark has a higher BMI than John.

TEST DATA 1: Marks weights 78 kg and is 1.69 m tall. John weights 92 kg and is 1.95 m tall.
TEST DATA 2: Marks weights 95 kg and is 1.88 m tall. John weights 85 kg and is 1.76 m tall.

*/
const massOfJohn = 92;
const massOfMark = 78;
const heightOfJohn = 1.95;
const heightOfMark = 1.69;

const bmiOfJohn = massOfJohn/heightOfJohn**2;
const bmiOfMark = massOfMark/heightOfMark**2;
console.log("BMI of John is ",bmiOfJohn)
console.log("BMI of Mark", bmiOfMark)
const markHigherBMI = bmiOfMark > bmiOfJohn;
console.log(markHigherBMI);