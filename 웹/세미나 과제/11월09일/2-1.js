for(var i=2;i<101;i++){
    var count=0;
    for(var a=1;a<i;a++){
        if(i%a==0)
            count++;
    }
    if(count==1)
        document.write(i + "  ");
}