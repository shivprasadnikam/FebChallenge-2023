
                                                      // Fruits into Basket  //

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        /*
            1) Use Hashmap for maintaining type of fruit
            2) 


        */
        map<int,int> basket;   // creating hashmap for storing frequency of type of fruits in basket
        int ans=0;  // returning max count of fruits
        int i=0,j=0,size=fruits.size();

        // looping through fruits

        while(i<size)
        {
            // storing frequency of type of fruits
            basket[fruits[i]]++;

            while(j<size && basket.size()>2)
            {
                if(basket[fruits[j]]==1)
                {
                    basket.erase(fruits[j]);
                }
                else
                {
                    basket[fruits[j]]--;
                }
                j++;
            }
              ans=max(i-j+1,ans);
                i++;
        
        }
        return ans;
      
        
    }
};
