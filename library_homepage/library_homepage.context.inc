<?php
/**
 * @file
 * library_homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function library_homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage_content';
  $context->description = 'The site home page';
  $context->tag = 'Resourceful';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'plus_search_simple-form' => array(
          'module' => 'plus_search_simple',
          'delta' => 'form',
          'region' => 'main_top',
          'weight' => '-45',
        ),
        'menu-menu-quick-links' => array(
          'module' => 'menu',
          'delta' => 'menu-quick-links',
          'region' => 'main_top',
          'weight' => '-44',
        ),
        'menu-menu-home-actions' => array(
          'module' => 'menu',
          'delta' => 'menu-home-actions',
          'region' => 'main_top',
          'weight' => '-43',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-45',
        ),
        'views-news_feed-block' => array(
          'module' => 'views',
          'delta' => 'news_feed-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Resourceful');
  t('The site home page');
  $export['homepage_content'] = $context;

  return $export;
}
