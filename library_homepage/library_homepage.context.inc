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
  $context->tag = 'Presentation';
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
        'fx_searchblock-form' => array(
          'module' => 'fx_searchblock',
          'delta' => 'form',
          'region' => 'main_top',
          'weight' => '-10',
        ),
        'menu-menu-quick-links' => array(
          'module' => 'menu',
          'delta' => 'menu-quick-links',
          'region' => 'main_top',
          'weight' => '-9',
        ),
        'menu-menu-home-actions' => array(
          'module' => 'menu',
          'delta' => 'menu-home-actions',
          'region' => 'main_top',
          'weight' => '-8',
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
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-news_feed-block_4' => array(
          'module' => 'views',
          'delta' => 'news_feed-block_4',
          'region' => 'content_col3-3',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Presentation');
  t('The site home page');
  $export['homepage_content'] = $context;

  return $export;
}
