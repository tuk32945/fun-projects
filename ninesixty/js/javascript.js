(function ($) {

  Drupal.behaviors.ninesixty = {
    attach: function (context) {
      $('#search-theme-form input:text', context).autofill({
        value: "Search..."
      });
    }
  };
})  (jQuery);
