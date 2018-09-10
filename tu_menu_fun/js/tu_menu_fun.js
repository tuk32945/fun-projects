(function($) {
  $(document).ready(function(){
      $('#block-tu-menu-fun-tu-menu-fun-block').hover(function(){
          $(this).css("background-color", "yellow");
      }, 
      function(){
          $(this).css("background-color", "pink");
      }); 

      $('tbody').sortable();
  });
})(jQuery);

