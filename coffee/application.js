(function($){
  $.fn.tapModal = function(options) {
    options = options || {}
    options.onClose = function(e) {
      $(e.orig).empty().remove();
      this.close();
    }
    var d = $(this).find("a").attr("target", options.target || "_tap").click(function(){
      if(!options.target) {
        setTimeout(function(){d.close();}, options.timeout || 3000);
        window.open('', '_tap').focus();
      }
    }).end()
    .find("form").attr("target", options.target || "_tap").submit(function(){
      if(!options.target) {
        setTimeout(function(){d.close();}, options.timeout || 3000);
        window.open('', '_tap').focus();
      }
    }).end()
    .appendTo(document.body).modal(options);
    return $(this);
  }
  $.fn.disable = function() {
    return $(this).attr("disabled", "disabled");
  }
  $.fn.enable = function() {
    return $(this).removeAttr("disabled");
  }
})(jQuery);