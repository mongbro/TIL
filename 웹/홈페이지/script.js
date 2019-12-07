function search(){
    var content = document.getElementById('SearchContent').value
    document.getElementById('SearchResult').innerHTML = content

}
$(document).ready(function(){
    $(".detail>button").click(function(){
        $(this).next("ul").toggleClass("hide");
    });
});