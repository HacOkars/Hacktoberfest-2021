


 $(document).ready(() => {

        
    $("#form").submit((e) => {

        let title = $("#todoInput").val()
        let desc = $("#todoDesc").val()

        if (title.length === 0) {
            $("#todoInput").css({
                'background-color': "rgba(245, 154, 154, 0.178)",
                'border': "1px solid red"
            })
            e.preventDefault()
            window.history.back()
            
        }
        
        else if (desc.length === 0) {
            $("#todoDesc").css({
                'background-color': "rgba(245, 154, 154, 0.178)",
                'border': "1px solid red"
            })
            e.preventDefault()
            window.history.back()
        }

        
    
    })

})


