<?php
/**
 * @file
 * library_homepage.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function library_homepage_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-home-actions.
  $menus['menu-home-actions'] = array(
    'menu_name' => 'menu-home-actions',
    'title' => 'Home Actions',
    'description' => 'Key links to be displayed on home page',
  );
  // Exported menu: menu-quick-links.
  $menus['menu-quick-links'] = array(
    'menu_name' => 'menu-quick-links',
    'title' => 'Quick Links',
    'description' => 'quick links for homepage - criteria to be defined',
  );
  // Exported menu: menu-search-options.
  $menus['menu-search-options'] = array(
    'menu_name' => 'menu-search-options',
    'title' => 'Search Options',
    'description' => 'Alternative search options',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Alternative search options');
  t('Home Actions');
  t('Key links to be displayed on home page');
  t('Quick Links');
  t('Search Options');
  t('quick links for homepage - criteria to be defined');


  return $menus;
}
