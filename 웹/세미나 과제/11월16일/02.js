function login(){
    var id = 'taejun'
    var pw = '1234';
    var input_id = document.getElementById('input_id').value
    var input_pw = document.getElementById('input_pw').value
    if (input_id == ""){
        alert("아이디를 입력하세요.")
        location.reload()
    }
    else if (input_pw ==""){
        alert("비밀번호를 입력하세요.")
        location.reload()
    }
    else if (input_id == id){
        if (input_pw == pw)
            alert(id+'님 환영합니다.')    
        else{
            alert("아이디와 비밀번호를 다시 확인하세요.")
            location.reload()
        }
    }
    else{
        alert("아이디와 비밀번호를 다시 확인하세요.")
        location.reload()
    }

}