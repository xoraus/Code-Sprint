#Apriori with input dataset as follows:

# Groceries.csv

# tid,items

# 1,"bread,milk,biscuit,cornflakes"

# 2,"bread,tea,bournvita"

# 3,"jam,maggi,bread,milk"

# 4,"maggi,tea,biscuit"

# 5,"bread,tea,bournvita"

# 6,"maggi,tea,cornflakes"

# 7,"maggi,bread,tea,biscuit"

# 8,"jam,maggi,bread,tea"

# 9,"bread,milk"

# 10,"coffee,cookie,biscuit,cornflakes"

# 11,"coffee,cookie,biscuit,cornflakes"

# 12,"coffee,suger,bournvita"

# 13,"bread,coffee,cookie"

# 14,"bread,suger,biscuit"

# 15,"coffee,suger,cornflakes"

# 16,"bread,suger,bournvita"

# 17,"bread,coffee,suger"

# 18,"bread,coffee,suger"

# 19,"tea,milk,coffee,cornflakes"





library(arules)

#loading dataset

groceries <- read.csv("\\\\engels-pc\\D\\Work\\Academic Work\\Courses II\\2018-19 Even\\15Z604 DM\\Lab Component\\Groceries.csv") 

#splitting as items and tid

trans <- as(split(groceries[,"tid"],groceries[,"items"]), "transactions")

inspect(trans)

#apriori and generating rules

basket_rules <- apriori(
  
  trans,
  
  #test with minlen 3, 4 ,1  etc
  
  #also test with varying sup and conf
  
  parameter = list(minlen=2, sup = 0.004, conf = 0.3) 
  
  #appearance = list(rhs=c("Admit=Rejected"),
  
  #                  default="lhs"),
  
)

basket_rules

#sort rules by confidence

basket_rules.sorted<-sort(basket_rules, by="conf")

#display results

inspect(basket_rules) 

