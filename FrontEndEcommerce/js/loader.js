$(document).ready(function(){
    $('.modal').modal();
    $('.sidenav').sidenav();
    $('.carousel').carousel();
    $('.parallax').parallax();
    $('.materialboxed').materialbox();
    $('.tabs').tabs();
    });
   var instance = M.Carousel.init({
    fullWidth: true,
    indicators: true
  });

function toggleModal()
{
    var instance = M.Modal.getInstance($('#modal3'));
    instance.open();
}
