var cars = [
    {type:"Volvo", year: 2016},
    {type:"Saab", year: 2011},
    {type:"BMW", year: 2010},
    {type:"Audi", year: 2017}
]
cars = cars.sort(function(a, b){return a['year'] - b['year']});
for(var i = 0; i < 4; i++)
document.write(cars[i].type, cars[i].year, "<br>")