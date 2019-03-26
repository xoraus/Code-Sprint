#Load Data Set

library(rattle)

# data(wine, package='rattle')

# 

# #Standardize Variables

# wine.stand <- scale(wine[-1])

# wine.stand

# #Call K - Means Algorithm

# k.means.fit <- kmeans(wine.stand, 3)

# attributes(k.means.fit)	

# k.means.fit$centers

# k.means.fit$cluster

# k.means.fit$size

# 

# library(cluster)

# clusplot(wine.stand, 

#          k.means.fit$cluster, 

#          main = '2D representation of the Cluster solution',  color= TRUE, shade = TRUE,  labels = 2, lines = 0)



Kdataset <- read.csv("\\\\engels-pc\\D\\Work\\Academic Work\\Courses II\\2018-19 Even\\15Z604 DM\\Lab Component\\KMeansData.csv") 

Kdataset

xvalues <- Kdataset$X2

yvalues <- Kdataset$X10

xvalues

yvalues





#K-Means Clustering Syntax

#Kmeans(x, centers, iter.max = 10, nstart = 1, method = "euclidean")



# x - A numeric matrix of data, or an object that can be coerced to such a matrix 

#(such as a numeric vector or a data frame with all numeric columns). Or an object of class "exprSet".



#centers - Either the number of clusters or a set of initial cluster centers. 

# If the first, a random set of rows in x are chosen as the initial centers.



# iter.max -  The maximum number of iterations allowed.



#nstart - If centers is a number, how many random sets should be chosen?





#Call K - Means Algorithm

data=data.frame(xvalues, yvalues)

data

kmeans.cluster <- kmeans(data, 3, iter.max = 10, nstart = 5)

kmeans.cluster

attributes(kmeans.cluster)	

kmeans.cluster$centers

kmeans.cluster$cluster

kmeans.cluster$size



library(cluster)

clusplot(data, 
         
         kmeans.cluster$cluster, 
         
         main = '2D representation of the Cluster solution',  color= TRUE, shade = TRUE,  labels = 2, lines = 0)





