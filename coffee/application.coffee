(($) ->
  $.fn.tapModal = (options) ->
    options = options or {}
    options.onClose = (e) ->
      $(e.orig).empty().remove()
      @close()

    d = $(this).find("a").attr("target", options.target or "_tap").click(->
      unless options.target
        setTimeout (->
          d.close()
        ), options.timeout or 3000
        window.open("", "_tap").focus()
    ).end().find("form").attr("target", options.target or "_tap").submit(->
      unless options.target
        setTimeout (->
          d.close()
        ), options.timeout or 3000
        window.open("", "_tap").focus()
    ).end().appendTo(document.body).modal(options)
    $ this

  $.fn.disable = ->
    $(this).attr "disabled", "disabled"

  $.fn.enable = ->
    $(this).removeAttr "disabled"
) jQuery
