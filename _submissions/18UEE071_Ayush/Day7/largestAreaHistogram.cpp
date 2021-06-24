int Solution::largestRectangleArea(vector<int> &arr) 
{
    stack<int> stack;
    int max_area = 0;
    int area;
    int i = 0;

    while(i<arr.size())
    {
        int current_element = arr[i];
        
        if(stack.empty() or arr[stack.top()]<=current_element)
        {
            stack.push(i);
            i++;
        }

        else
        {
            int tp = stack.top();
            stack.pop();
            if(stack.empty())
            {
                area = arr[tp]*i;
            }
            else
            {
                area = arr[tp]*(i-stack.top()-1);
            }

            max_area = max(max_area,area);
            
        }
        
    }
    while(!stack.empty())
    {
        int tp= stack.top();
        stack.pop();
        if(stack.empty()) area = arr[tp]*i;
        else area= arr[tp]*(i-stack.top()-1);
        max_area = max(max_area,area);

    }

    return max_area;
}
