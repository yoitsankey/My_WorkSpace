// Coding Challenge #3

/*
There are two gymnastics teams, Dolphins and Koalas. They compete against each other 3 times. The winner with the highest average score wins the a trophy!

1. Calculate the average score for each team, using the test data below
2. Compare the team's average scores to determine the winner of the competition, and print it to the console. Don't forget that there can be a draw, so test for that as well (draw means they have the same average score).

3. BONUS 1: Include a requirement for a minimum score of 100. With this rule, a team only wins if it has a higher score than the other team, and the same time a score of at least 100 points. HINT: Use a logical operator to test for minimum score, as well as multiple else-if blocks 😉
4. BONUS 2: Minimum score also applies to a draw! So a draw only happens when both teams have the same score and both have a score greater or equal 100 points. Otherwise, no team wins the trophy.

TEST DATA: Dolphins score 96, 108 and 89. Koalas score 88, 91 and 110
TEST DATA BONUS 1: Dolphins score 97, 112 and 101. Koalas score 109, 95 and 123
TEST DATA BONUS 2: Dolphins score 97, 112 and 101. Koalas score 109, 95 and 106

GOOD LUCK 😀
*/

const Dolphins_score1=96;
const Dolphins_score2=108;
const Dolphins_score3=89;

const Koalas_score1=88;
const Koalas_score2=91;
const Koalas_score3=110;

const Dolphins_average=(Dolphins_score1+Dolphins_score2+Dolphins_score3)/3;
const Koalas_average=(Koalas_score1+Koalas_score2+Koalas_score3)/3;

if(Dolphins_average===Koalas_average){
    console.log(`It's a Draw! Both teams have score of ${Dolphins_average}`);
}
else if(Dolphins_average>Koalas_average){
    console.log(`Dolphins are winner with an average score of ${Dolphins_average}`);
}
else{
    console.log(`Koalas are the winners with and average of ${Koalas_average}`);
}