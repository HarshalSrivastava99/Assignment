class Solution {
public:
int solve( int head,int step,int remaining,bool left)
{
    if(remaining==1)
    {
        return head;
    }
    //update head
    if(left || remaining%2 == 1)
    {
        head=head+step;
    }
    return solve(head,step*2,remaining/2,!left);
}
    int lastRemaining(int n) {
        return solve(1,1,n,true);
        
    }
};