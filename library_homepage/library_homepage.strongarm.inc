<?php
/**
 * @file
 * library_homepage.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function library_homepage_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contextual_block_class';
  $strongarm->value = array(
    'homepage_content' => array(
      'fx_searchblock-form' => array(
        0 => 'span6',
      ),
      'menu-menu-quick-links' => array(
        0 => 'span3',
      ),
      'menu-menu-home-actions' => array(
        0 => 'span3',
      ),
    ),
  );
  $export['contextual_block_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fx_searchblock_menu_name';
  $strongarm->value = 'menu-search-options';
  $export['fx_searchblock_menu_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fx_searchblock_menu_on';
  $strongarm->value = 1;
  $export['fx_searchblock_menu_on'] = $strongarm;

  return $export;
}
