var a=[1,2,3,4,5,6,7,8,9,10];
var b = [2,4,5,7,11,15];
var count=0;
for(var i=0;i<a.length;i++){
    for(var j=0;j<b.length;j++){
        if(a[i]==b[j]){
           count++;
            
        }
        
    }
    
}
console.log(count);
