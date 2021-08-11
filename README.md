# challenge2
git rebase concept
We are going to calculate the trapezoid area. The formula for trapezoid area is 𝑎+𝑏 × h.
Assume we have a,b,h values are given. Feel free to pick any programming language you feel comfortable with.
Step1: Make an initial git commit by creating a main file in the master branch.
Step2: Create a branch called feature/divisionByTwo which will be responsible for dividing the given value by 2.
Example: Input -> additionValue=6 Output -> 4
Step3: Create a branch called feature/addition. Which will be responsible for adding a,b values.
Example: Input -> a=2, b=3 Output -> 5
Step4: Now create another branch feature/multiplication on top of feature/divisionByTwo which will be responsible for doing the multiplication by h.
Example: Input -> divisionValue=2, h=3 Output -> 6
Step5: Now merge the feature/addition with the master branch.
Step6: Now we need feature/addition logic in the feature/divisionByTwo branch. So rebase the feature/divisionByTwo with the master branch. Use the addition logic in
feature/divisionByTwobranchtocalculate 𝑎+𝑏value. 2
Step7: Merge feature/divisionByTwo into master.
Step8: Get all the code from master in feature/multiplication branch and perform the
calculation 𝑎+𝑏 × h. 2
Note: Dotted line indicates rebasing. First it will be pointed to a particular commit, after rebasing it will be pointed to another commit. That’s the reason it indicates dotted lines.
