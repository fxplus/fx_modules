jQuery(document).ready(function($) {
    fx_showhide(fx_getCookie('Drupal.visitor.showhide'));
    $('#admin-hide').click(function() {fx_showhide('hide');});
    $('#admin-show').click(function() {fx_showhide('show');});
    // alert(settings.admin_menu.suppress);4

    //$('section.block.collapsible .block-title').css('cursor','pointer').on('click touchstart', function() { fx_hideblock(this); });
    //$('section.block.collapsible.collapsed .block-content').hide();
    //$('#plus-search-block-form').hide();
});

function fx_showhide(action) {
    fx_setCookie('Drupal.visitor.showhide', action, 7);
    if (action == 'show') {
        jQuery(Drupal.settings.fx_glue.admin_elements).show();
    } 
    else if (action == 'hide') {
        jQuery(Drupal.settings.fx_glue.admin_elements).hide();
    }
}

function fx_setCookie(name, value, days) {
    if (days) {
        var date = new Date();
        date.setTime(date.getTime() + (days * 24 * 60 * 60 * 1000));
        var expires = "; expires=" + date.toGMTString();
    }
    else var expires = "";
    document.cookie = name + "=" + value + expires + "; path=/";
}
function fx_getCookie(c_name) {
    if (document.cookie.length > 0) {
        c_start = document.cookie.indexOf(c_name + "=");
        if (c_start != -1) {
            c_start = c_start + c_name.length + 1;
            c_end = document.cookie.indexOf(";", c_start);
            if (c_end == -1) {
                c_end = document.cookie.length;
            }
            return unescape(document.cookie.substring(c_start, c_end));
        }
    }
    return "";
}
