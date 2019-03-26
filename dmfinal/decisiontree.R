#Reference: http://www.guru99.com/r-decision-trees.html
#-------------------------------------------------------
#steps:
#1.Impport the data()
#2.clean the data 
#3.create train/test ste 
#4.Build the model 
#5.Make Prediction 
#6.Measure the performance
#------------------------------------------------------- 
#step 1
data("Titanic")

dimnames(Titanic)

df<-as.data.frame(Titanic)
head(df)
#
df<-as.data.frame(Titanic)
titanic.raw<-NULL
for(i in 1:4)
{
  titanic.raw<-cbind(titanic.raw,rep(as.character(df[,i]),df$Freq))
}
titanic.raw<-as.data.frame(titanic.raw)
names(titanic.raw)<-names(df)[1:4]
dim(titanic.raw)
#view first few record of data
head(titanic.raw)
#view last few records of data
tail(titanic.raw)
dt = sort(sample(nrow(titanic.raw), nrow(titanic.raw)*.7))
train<-titanic.raw[dt,]
test<-titanic.raw[-dt,]
#-----------------------------------------------------------------
#step 4
library(rpart)
library(rpart.plot)
fit<-rpart(Survived~.,data=train,method='class')
rpart.plot(fit,extra=106)
#-----------------------------------------------------------------
#step 5:validate the tree using test data
predict_unseen <- predict(fit,data_test,type='class')
table_confusion_mat<-table(data_test$Survived,predict_unseen)
table_confusion_mat
#-----------------------------------------------------------------
#step 6: Measure performance
accuracy_Test <- sum(diag(table_confusion_mat))/sum(table_confusion_mat)
accuracy_Test
#----------------------------------------------------------------