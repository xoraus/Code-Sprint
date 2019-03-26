#Linear regressin example 1

# create input data

CGPA <- c(7, 7.5, 8, , 9)

Awards <- c(1,3,5,7,8)

# call linear model function to create linear model for your data. 

# Observe how lm takes in the parameters

LinearModel <- lm(Awards~CGPA)

#display linear regression model details

LinearModel

#set valude for input as CGPA 

inputvalue <-data.frame(CGPA = 7.8)

#Compute predicted value

predictionResult  <- predict(LinearModel,inputvalue)

#Display predicted value (as data frame so the size may be printed in the first line)

print(predictionResult)



#----------------------------------------------------

#Linear regressin example 2

#Importing the Boston housing dataset from file location

boston <- read.csv("\\\\engels-pc\\D\\Work\\Academic Work\\Courses II\\2018-19 Even\\15Z604 DM\\Lab Component\\HousingData.csv") 

#506 observations of 14 variables in the dataframe - example for reference below

# CRIM,ZN,INDUS,CHAS,NOX,RM,AGE,DIS,RAD,TAX,PTRATIO,B,LSTAT,MEDV

# 0.00632,18,2.31,0,0.538,6.575,65.2,4.09,1,296,15.3,396.9,4.98,24

# 0.02731,0,7.07,0,0.469,6.421,78.9,4.9671,2,242,17.8,396.9,9.14,21.6

# 0.02729,0,7.07,0,0.469,7.185,61.1,4.9671,2,242,17.8,392.83,4.03,34.7



#extracting columns

value <-boston$MEDV

age <-boston$AGE

#Creating linaer model through lm

linModelBoston <- lm(value~age)

linModelBoston

#setting input value

invalue <-data.frame(age = 92)

#performing prediction

prediction <-predict(linModelBoston, invalue)

print(prediction)



#----------------------------------------------------

#Linear regressin example 3

#Importing the age and salary dataset from file. 

#partial input file for reference

# age,salary

# 25,27960

# 39,41420

# 21,23420

# ,2220

# 14,16220

# 19,21220

# 27,30110

# 56,59110

# 60,63110

# 46,49110

# 54,57110

# 43,46110

# ,3110

# 22,25070

# 45,48070

ds <- read.csv("\\\\engels-pc\\D\\Work\\Academic Work\\Courses II\\2018-19 Even\\15Z604 DM\\Lab Component\\LinearRegressionDS.csv") 



# replacing no-values / empty slots with mean and median respectively for age and salary

ds$age[which(is.na(ds$age))] <- mean(ds$age, na.rm= T)

ds$salary[which(is.na(ds$salary))] <- median(ds$salary, na.rm= T)



salary <-ds$salary

age <-ds$age

#Creating linaer model through lm

linModelSalary<- lm(salary~age)

linModelSalary

#creating input value for which salary has to be predicted. 

invalue <-data.frame(age = 43)

prediction <-predict(linModelSalary, invalue)

print(prediction)

